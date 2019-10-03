package lista5;
import lista5.Grupo;
import lista5.Publicacao;
import java.util.*;

public class Usuario {
	protected String nome;
	protected String id;
	protected Date data;
	public static int qtdUsuarios = 0;
	private ArrayList<Usuario> seguidores;
	private ArrayList<Grupo> grupos;
	private ArrayList<Publicacao> publicacoes;
	
	Usuario(){
		qtdUsuarios++;
		seguidores = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
		publicacoes = new ArrayList<Publicacao>();
	}
	
	Usuario(String nome, String id, Date data){
		qtdUsuarios++;
		this.nome = nome;
		this.data = data;
		this.id = id;
		seguidores = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
		publicacoes = new ArrayList<Publicacao>();
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public String getId() {
		return this.id;
	}
	
	public Date getData() {
		return this.data;
	}
	
	public void Seguir(Usuario user) {
		this.seguidores.add(user);
	}
	
	public Grupo Criar_Grupo(String nome, int idadeMinUser, int idadeMinPage,String categoria) {
		Grupo novo = new Grupo(nome, idadeMinUser, idadeMinPage, this, categoria);
		this.grupos.add(novo);
		return novo;
	}
	
	void Entrar_Grupo(Grupo grp) {
		grp.Novo_Participante(this);
		this.grupos.add(grp);
	}
}
