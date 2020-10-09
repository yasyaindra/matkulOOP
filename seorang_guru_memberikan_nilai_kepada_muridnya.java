public class Test { 
    public static void main(String[] args) 
    { 
        int nilai = 70; 
        String predikat; 
            switch (predikat) { 
            case (50<60): 
                predikat = "kurang"; 
                break; 
            case (66<70): 
                predikat = "cukup"; 
                break; 
            case (71<79): 
                predikat = "baik"; 
                break; 
            case (80<100): 
                predikat = "sangat baik"; 
                break; 
            default: 
                predikat = "belum dikumpulkan"; 
                break; 
            }
            return System.out.println(predikat);    
            }
}