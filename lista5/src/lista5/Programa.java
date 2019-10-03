package lista5;
import lista5.*;
import java.util.*;

public class Programa {
	
	public static void main(String[] args) {
		RedeSocial facezada = new RedeSocial("Facefy");
		facezada.Novo_Usuario(new Usuario("João kleber", "1533", new Date(9459348)));
		facezada.Novo_Usuario(new Usuario("Peterson", "2503", new Date(949331234)));
		facezada.Novo_Usuario(new Usuario("Deive", "3241", new Date(949331231)));
		facezada.Novo_Usuario(new Usuario("Alexandre", "1233", new Date(94912123)));
		facezada.Printar_Usuarios();
	}

}
