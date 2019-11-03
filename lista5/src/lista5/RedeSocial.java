package lista5;
import lista5.Usuario;
import lista5.Grupo;
import java.util.*;
/**
 * Define uma rede social
 * @author Tiago Cruz
 *
 */
public class RedeSocial {
	private String nome;
	private ArrayList<Usuario> usuarios;
	private ArrayList<Grupo> grupos;
	
	RedeSocial(){
		usuarios = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
	}
	/**
	 * Cria um nova rede social
	 * 
	 * @author Tiago Cruz
	 * @param nome Nome da rede
	 */
	RedeSocial(String nome){
		this.nome = nome;
		usuarios = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
	}
	/**
	 * Adiciona usuários a rede
	 * @author Tiago Cruz
	 * @param user Usuário do site
	 */
	public void Novo_Usuario(Usuario user) {
		this.usuarios.add(user);
	}
	/**
	 * Adiciona um grupo na rede
	 * 
	 * @author Tiago Cruz
	 * @param grp Grupo criado por um usuários
	 */
	public void Novo_Grupo(Grupo grp) {
		this.grupos.add(grp);
	}
	/**
	 * Imprime os usuarios
	 * 
	 * @author Tiago Cruz
	 */
	public void Printar_Usuarios() {
		usuarios.forEach(user -> {
			System.out.print(user.getNome() + "\n");
			System.out.print(user.getId() + "\n");
			System.out.print(user.getData() + "\n");
		});
	}
}
