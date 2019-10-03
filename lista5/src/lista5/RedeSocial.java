package lista5;
import lista5.Usuario;
import lista5.Grupo;
import java.util.*;

public class RedeSocial {
	private String nome;
	private ArrayList<Usuario> usuarios;
	private ArrayList<Grupo> grupos;
	
	RedeSocial(){
		usuarios = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
	}
	
	RedeSocial(String nome){
		this.nome = nome;
		usuarios = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
	}
	
	public void Novo_Usuario(Usuario user) {
		this.usuarios.add(user);
	}
	
	public void Novo_Grupo(Grupo grp) {
		this.grupos.add(grp);
	}
	
	public void Printar_Usuarios() {
		usuarios.forEach(user -> {
			System.out.print(user.getNome() + "\n");
			System.out.print(user.getId() + "\n");
			System.out.print(user.getData() + "\n");
		});
	}
}
