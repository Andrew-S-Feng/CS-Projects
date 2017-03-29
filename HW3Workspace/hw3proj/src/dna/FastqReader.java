package dna;
import java.io.BufferedReader;
import java.io.IOException;

// Models a fastq reader
public class FastqReader {
	
	private BufferedReader theBufferedReader;
	
	// Constructs a fastq reader using a buffered reader
	public FastqReader(BufferedReader theBufferedReader) {
		this.theBufferedReader = theBufferedReader;
	}
	
	/* Reads a file placed in the buffered reader
	 * return a fastq record based off the contents of the buffered reader
	 */
	public FastqRecord readRecord() throws IOException, FastqException {
		String defline = theBufferedReader.readLine();
		String sequence = "";
		String quality = "";
		if (defline != null) {
			sequence = theBufferedReader.readLine();
			theBufferedReader.readLine();
			quality = theBufferedReader.readLine();
		}
		return new FastqRecord(defline, sequence, quality);
	}
}
