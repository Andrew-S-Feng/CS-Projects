package dna;

// Models an exception for fastq
public class FastqException extends Exception {
	
	// Constructs a exception with a String message
	public FastqException(String msg) {
		super(msg);
	}

	/* Tests whether or not getMessage() returns the message argument of the constructor
	 * return true is it does, false if it doesn't
	 */
	private static boolean testMessage(String mssg) {
		FastqException test = new FastqException(mssg);
		try {
			throw test;
		}
			
		catch (FastqException x) {
			System.out.println(x.getMessage());
			if (x.getMessage().equals(mssg)) {
				return true;
			}
			else {
			return false;
			}
		}
	}
	
	public static void main(String[] agrs) {
		System.out.println(testMessage("I once was a bird."));
	}
}
