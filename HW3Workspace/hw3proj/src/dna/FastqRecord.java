package dna;

// Models a fastq record that can compare itself to others of its type
public class FastqRecord implements DNARecord, Comparable<FastqRecord> {
	
	private String defline;
	private String sequence;
	private String quality;
	
	/* Constructs a fastq record that has String defline, sequence, and quality
	 * throws an exception if the 1st char in defline is not '@'
	 */
	public FastqRecord(String defline, String sequence, String quality) throws FastqException {
		this.defline = defline;
		this.sequence = sequence;
		this.quality = quality;
		if (defline != null) {
			if(defline.charAt(0) != '@')
			{
				throw new FastqException("Bad 1st char in 1st line of defline: saw " + defline.charAt(0) + " ,expection @");
			}
		}
	}

	@Override
	/* Checks if defline, sequence, and quality in the two FastqRecords are the same as each other
	 * return true if they are, false if they aren't
	 */
	public boolean equals(Object x) {
		FastqRecord that = (FastqRecord)x;
		if (this.defline.equals(that.defline) && this.sequence.equals(that.sequence) && this.quality.equals(that.quality)) {
			return true;
		}
		return false;
	}
	
	@Override
	/* Compares the defline, sequence, and quality of two FatsqRecords; in that order
	 * return a positive int if the original FastqRecord is greater, negative int if its less, and 0 if they are equal
	 */
	public int compareTo(FastqRecord cmp) {
		if (this.defline.compareTo(cmp.defline) != 0) {
			return this.defline.compareTo(cmp.defline);
		}
		else if(this.sequence.compareTo(cmp.sequence) != 0) {
			return this.sequence.compareTo(cmp.sequence);
		}
		else {
			return this.quality.compareTo(cmp.quality);
		}
	}
	
	/* Checks if the 1st char is '!' using the method getFirstChar() from QualityChecker
	 * return true if it is, false if it isn't
	 */
	public boolean qualityIsHigh() {
		QualityChecker qual = new QualityChecker();
		if (qual.getFirstChar() != '!') {
			return false;
		}
		return true;
	}

	@Override
	// return defline as a String
	public String getDefline() {
		return defline;
	}

	@Override
	// return sequence as a String
	public String getSequence() {
		return sequence;
	}
		
	@Override
	// return defline, sequence, and quality as hashcodes
	public int hashCode() {
	return defline.hashCode() + sequence.hashCode() + quality.hashCode();
	}
	
	@Override
	// return the defline, sequence, "+", and quality as a String on different lines
	public String toString() {
		return defline + "\n" + sequence + "\n" + "+\n" + quality + "\n";
	}
	
	// Models a checker of quality
	private class QualityChecker {
		
		// return the first char of quality
		public int getFirstChar() {
			return quality.charAt(0);
		}
	}	
	}
