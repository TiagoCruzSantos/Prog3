package lista5;
import lista5.Usuario;
import lista5.Categoria;
import java.util.*;
/**
 * Define um Grupo em uma rede social
 * 
 * @author Tiago Cruz
 *
 */
public class Grupo {
	private String nome;
	private int idadeMinUsuarioAnos;
	private int idadeMinPaginaDias;
	private Usuario admin;
	private Categoria categoria;
	private ArrayList<Usuario> participantes;
	
	Grupo(){
		participantes = new ArrayList<Usuario>();
	}
	/**
	 * Cria um grupo
	 * 
	 * @author Tiago Cruz
	 * @param nome Nome do grupo
	 * @param idadeMinUser Idade minima de ingresso no grupo
	 * @param idadeMinPag Idade da página
	 * @param user Administrador do grupo
	 * @param categoria Categoria do grupo
	 */
	Grupo(String nome, int idadeMinUser, int idadeMinPag, Usuario user, String categoria){
		this.nome = nome;
		this.idadeMinPaginaDias = idadeMinPag;
		this.idadeMinUsuarioAnos = idadeMinUser;
		this.admin = user;
		participantes = new ArrayList<Usuario>();
		this.categoria = new Categoria(categoria);
	}
	/**
	 * Muda o administrador
	 * @author Tiago Cruz
	 * @param user Administrador do grupo
	 */
	public void setAdmin(Usuario user) {
		this.admin = user;
	}
	/**
	 * Adiciona participante
	 * 
	 * @author Tiago Cruz
	 * @param user Novo participante
	 */
	public void Novo_Participante(Usuario user) {
		this.participantes.add(user);
	}
}
