package dna;
import java.io.PrintWriter;
import java.io.IOException;

// Models a fasta writer
public class FastaWriter {
	
	private PrintWriter thePrintWriter;

	// Constructs a fasta writer usinga print writer
	public FastaWriter(PrintWriter thePrintWriter) {
		this.thePrintWriter = thePrintWriter;
	}
	
	// Writes the contents of the fasta record inputed
	public void writeRecord(FastaRecord rec) throws IOException, FastqException {
		thePrintWriter.write(rec.toString());
	}
	
}
