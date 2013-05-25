import java.util.*;
import java.awt.Point;

class Main{
	public static void main(String[] args){
		char[][] matrix = new char[5][5];
		HashMap<Character,Point> map = new HashMap<Character,Point>();
		Scanner sc = new Scanner(System.in);

		int tc = sc.nextInt();
		sc.nextLine();
		while(tc-- > 0){
			map.clear();
			String key = sc.nextLine();
			String ptext = sc.nextLine();

			key = key.replaceAll("\\s","");
			key = createCompleteKey(key);
			for(int i = 0; i < 25; i++){
				map.put(key.charAt(i), new Point(i/5,i%5));
				matrix[i/5][i%5] = key.charAt(i);
			}
			ptext = ptext.replaceAll("\\s","");
			System.out.println(encrypt(ptext,map,matrix));
		}
	}

	public static String encrypt(String text, HashMap<Character,Point> map, char[][] matrix){
		String encrypted = "";
		for(int i = 0; i < text.length(); i+=2){
			char ch1, ch2;
			ch1 = text.charAt(i);
			
			if(i+1 < text.length()){
				ch2 = text.charAt(i+1);
			} else{
				ch2 = 'x';
			}

			if(ch1 == ch2){
				ch2 = 'x';
				i--;
			}
			//System.out.println(ch1 + " " + ch2);
			Point loc1 = map.get(ch1);
			Point loc2 = map.get(ch2);

			if(loc1.getX() == loc2.getX()){ //same row
				encrypted += matrix[(int)loc1.getX()][(int)(loc1.getY()+1)%5];
				encrypted += matrix[(int)loc2.getX()][(int)(loc2.getY()+1)%5];
			} else if(loc1.getY() == loc2.getY()){ //same col
				encrypted += matrix[(int)(loc1.getX()+1)%5][(int)loc1.getY()];
				encrypted += matrix[(int)(loc2.getX()+1)%5][(int)loc2.getY()];
			} else{
				encrypted += matrix[(int)loc1.getX()][(int)loc2.getY()];
				encrypted += matrix[(int)loc2.getX()][(int)loc1.getY()];
			}
		}
		return encrypted.toUpperCase();
	}

	public static String createCompleteKey(String str){
		char[] chars = str.toCharArray();
	    Set<Character> charSet = new LinkedHashSet<Character>();
	    for (char c : chars) {
	        charSet.add(c);
	    }

	    for(int i = 0; i < 26; i++){
	    	if('a'+i != 'q'){
	    		charSet.add(new Character((char)('a'+i)));
	    	}
	    }

	    StringBuilder sb = new StringBuilder();
	    for (Character character : charSet) {
	        sb.append(character);
	    }
	    return sb.toString();
	}
}