package lista5;
//import lista5.*;
import java.util.*;

public class Programa {
	
	public static void main(String[] args) {
		RedeSocial facezada = new RedeSocial("Facefy");
		Usuario nv1 = new Usuario("João kleber", "1533", new Date(9459348));
		facezada.Novo_Usuario(nv1);
		Usuario nv2 = new Usuario("Peterson", "2503", new Date(949331234));
		facezada.Novo_Usuario(nv2);
		Usuario nv3 = new Usuario("Deive", "3241", new Date(949331231));
		facezada.Novo_Usuario(nv3);
		Usuario nv4 = new Usuario("Alexandre", "1233", new Date(94912123));
		facezada.Novo_Usuario(nv4);
		nv4.Seguir(nv1);
		nv1.Seguir(nv4);
		nv3.Seguir(nv2);
		nv1.Seguir(nv2);
		facezada.Printar_Usuarios();
		nv4.Printar_seguidos();
		Grupo kkkeaeman = nv4.Criar_Grupo("Grupo de familia", 0, 100, "asadsad");
		facezada.Novo_Grupo(kkkeaeman);
		kkkeaeman.Novo_Participante(nv1);
		kkkeaeman.Novo_Participante(nv2);
		
	}

}
