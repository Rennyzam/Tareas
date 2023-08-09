package CBD;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class ModificaBBDD {
	 public static void main(String[]args) {
		  
		 try {
		    
		    Connection miConexion= DriverManager.getConnection("jdbc:postgresql://127.0.0.1:5432/sistema","postgres", "Akira2380.");
		    System.out.println("Paso 1 coneccion  completo");
		    
		   
		    Statement miStatement= miConexion.createStatement(); 
		    System.out.println("Paso 2 objeto para hacer consultas completo"); 
		    
		    //String insertSQL = "INSERT INTO persona(nombre, direccion) VALUES ('','')";
		    //String insertSQL = "INSERT INTO persona  VALUES('','')";
		    
		    String insertSQL = "SELECT *FROM persona";
		    
		    ResultSet miReseultset = miStatement.executeQuery(insertSQL); 
		    
		    
		    System.out.println("Paso 3 completo"); 
		        
		    while(miReseultset.next()) {
		        
		     System.out.println("id    : "+ miReseultset.getInt("id_persona")+
		                  " Nombre  : "+ miReseultset.getString("nombre")+
		                  " Direccion : "+ miReseultset.getString("direccion"));     
		    
		    }
		    System.out.println("Paso 4 completo"); 
		    
		   }catch(Exception e  ) {
		    System.out.println("Fallo");
		    System.out.println(e.getMessage()); 
		   }
		  }

}
