package lista5;
import lista5.Usuario;
import lista5.Categoria;
import java.util.*;

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
	
	Grupo(String nome, int idadeMinUser, int idadeMinPag, Usuario user, String categoria){
		this.nome = nome;
		this.idadeMinPaginaDias = idadeMinPag;
		this.idadeMinUsuarioAnos = idadeMinUser;
		this.admin = user;
		participantes = new ArrayList<Usuario>();
		this.categoria = new Categoria(categoria);
	}
	
	public void setAdmin(Usuario user) {
		this.admin = user;
	}
	
	public void Novo_Participante(Usuario user) {
		this.participantes.add(user);
	}
}
