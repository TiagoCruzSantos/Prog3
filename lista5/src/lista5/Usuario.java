package lista5;
import lista5.Grupo;
import lista5.Publicacao;
import java.util.*;
/**
 * Define um Usuário
 * @author Tiago Cruz
 *
 */
public class Usuario {
	protected String nome;
	protected String id;
	protected Date data;
	public static int qtdUsuarios = 0;
	private ArrayList<Usuario> seguidores;
	private ArrayList<Grupo> grupos;
	private ArrayList<Publicacao> publicacoes;
	/**
	 * Cria um novo usuario sem informações
	 * 
	 * @author Tiago Cruz
	 * 
	 */
	Usuario(){
		qtdUsuarios++;
		seguidores = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
		publicacoes = new ArrayList<Publicacao>();
	}
	/**
	 *Cria um usuario com informações prévias
	 *
	 *@author Tiago Cruz
	 *@param nome 	Nome de usuario
	 *@param id 	Identificação única
	 *@param data 	Data de nascimento
	 * @return Usuário alocado
	 */
	Usuario(String nome, String id, Date data){
		qtdUsuarios++;
		this.nome = nome;
		this.data = data;
		this.id = id;
		seguidores = new ArrayList<Usuario>();
		grupos = new ArrayList<Grupo>();
		publicacoes = new ArrayList<Publicacao>();
	}
	/**
	 * Retorna o nome do usuário
	 * 
	 * @author Tiago Cruz
	 * @return Nome do usuário
	 */
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
	/**
	 * Cria um grupo com o usuário como administrador
	 * 
	 *@author Tiago Cruz
	 *@param nome Nome do grupo
	 *@param idadeMinUser Idade minima para ingresso de novos usuários
	 *@param idadeMinPage Idade do grupo
	 *@param categoria Categoria do grupo
	 *@return Um novo grupo onde o usuário que criou é administrador
	 */
	public Grupo Criar_Grupo(String nome, int idadeMinUser, int idadeMinPage,String categoria) {
		Grupo novo = new Grupo(nome, idadeMinUser, idadeMinPage, this, categoria);
		this.grupos.add(novo);
		return novo;
	}
	/**
	 * Entra em um grupo
	 * 
	 * @author Tiago Cruz
	 * @param grp Grupo já existente
	 */
	public void Entrar_Grupo(Grupo grp) {
		grp.Novo_Participante(this);
		this.grupos.add(grp);
	}
	/**
	 * Imprime seguidores do usuário
	 * 
	 * @author Tiago Cruz
	 */
	public void Printar_seguidos() {
		this.seguidores.forEach(users -> {
			System.out.print("Nome: " + users.getNome() + "\n");
		});;
	}
}
