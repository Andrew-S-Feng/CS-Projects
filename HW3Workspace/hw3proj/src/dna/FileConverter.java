package dna;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;

// Models a converter that can convert fastq files to fasta files
public class FileConverter {
	
	private File fastq;
	private File fasta;
	
	// Constructs a converter with two files
	public FileConverter(File fastq, File fasta) {
		this.fastq = fastq;
		this.fasta = fasta;
	}

	// Accepts a fastq file, reads it, then converts it to fasta and writes it as a file
	public void convert() throws IOException {
		FileReader fr = new FileReader(fastq);
		BufferedReader br = new BufferedReader(fr);
		FastqReader fqr = new FastqReader(br);
		FileWriter fw = new FileWriter(fasta);
		PrintWriter pw = new PrintWriter(fw);
		FastaWriter faw = new FastaWriter(pw);
		boolean done = false;
		try {
		String defq = "";
		String defa = "";
			while (!done) {
				FastqRecord recq = fqr.readRecord();
				if (recq.getDefline() == null) {
					done = true;
					break;
				}
				defq = recq.getDefline().substring(1);
				if (defq.compareTo(defa) != 0 && recq.qualityIsHigh()) {
				FastaRecord reca = new FastaRecord(recq);
				defa = reca.getDefline().substring(1);
				faw.writeRecord(reca);
				}
			}
		}
		catch (FastqException x) {
			System.out.println(x.getMessage());
		}
		pw.close();
		fw.close();
		br.close();
		fw.close();
	}
	
	public static void main(String[] args) {
		 System.out.println("Starting");
		 try {
		 File fastq = new File("data/HW3-1.fastq");
		 assert fastq.exists();
		 File fasta = new File("data/HW3-1.fasta");
		 FileConverter converter = new FileConverter(fastq, fasta);
		 converter.convert();
		 assert fastq.exists();
		 }
		 catch (IOException x) {
		 System.out.println(x.getMessage());
		 }
		 System.out.println("Done");
		 }
	
}
