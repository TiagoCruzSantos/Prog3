package lista5;
import java.util.*;
/**
 * Define as publicações de um grupo
 * @author Tiago Cruz
 *
 */
public class Publicacao {
	private String conteudo;
	private Date data;
	
	Publicacao(){
		
	}
	
	Publicacao(String conteudo, Date data){
		this.conteudo = conteudo;
		this.data = data;
	}
}
