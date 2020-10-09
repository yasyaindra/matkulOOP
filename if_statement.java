public class ifStatement {
   public static void main(String []args) {
       boolean hujan = true;
       boolean hujan_rintik = true && false;
       if(hujan){
           System.out.println('Pakai payung')
       } else if(hujan_rintik){
           System.out.println('berteduh dulu')
       } else {
           System.out.println('jalan terus')
       }
   }
}