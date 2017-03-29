package dna;

// Models a fasta record that can compare itself to others of its type
public class FastaRecord implements DNARecord, Comparable<FastaRecord> {
	
	private String defline;
	private String sequence;
	
	// Constructs a fasta record that has String defline and sequence
	public FastaRecord(String defline, String sequence) {
		this.defline = defline;
		this.sequence = sequence;
	}
	
	// Constructs a fasta record that takes String defline and sequence from a fastq record
	public FastaRecord(FastqRecord a) {
		this.defline = a.getDefline().replace('@', '>');
		this.sequence = a.getSequence();
	}

	@Override
	/* Compares the defline and sequence of two fasta records; in that order
	 * return positive int if the preceding fasta record is bigger, negative int if its smaller, and 0 if they are equal
	 */
	public int compareTo(FastaRecord cmpd) {
		if (this.defline.compareTo(cmpd.defline) != 0) {
			return this.defline.compareTo(cmpd.defline);
		}
		else {
		return this.sequence.compareTo(cmpd.sequence);
		}
	}
	
	@Override
	/* Checks if two fasta records are the same
	 * return true if they are, false if they are not
	 */
	public boolean equals(Object x) {
		FastaRecord that = (FastaRecord)x;
		if (this.compareTo(that) == 0) {
			return true;
		}
		return false;
	}

	@Override
	// return the defline
	public String getDefline() {
		return defline;
	}

	@Override
	// return the sequence
	public String getSequence() {
		return sequence;
	}
	
	@Override
	// return the defline and sequence as hashcodes
	public int hashCode() {
		return	defline.hashCode()	+	sequence.hashCode();
	}
	
	@Override
	// return the defline and sequence as a String in different lines
	public String toString() {
		return defline + "\n" + sequence + "\n";
	}

}
