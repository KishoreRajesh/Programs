import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.UUID;

public class NFCTicketGenerator {

    public static void main(String[] args) {
        // Generate a unique UID for the NFC ticket
        String uid = generateUID();

        // Ticket information (e.g., count)
        int ticketCount = 3;

        // Create an NDEF message with ticket information
        byte[] ndefMessage = createNdefMessage(ticketCount);

        // Display UID and NDEF message
        System.out.println("NFC Ticket UID: " + uid);
        System.out.println("NDEF Message: " + Arrays.toString(ndefMessage));
    }

    private static String generateUID() {
        // Generate a random UUID and convert it to a hexadecimal string
        UUID uuid = UUID.randomUUID();
        return uuid.toString().replace("-", "").substring(0, 8); // Use first 8 characters as UID
    }

    private static byte[] createNdefMessage(int ticketCount) {
        // Construct NDEF message with ticket count
        String ticketInfo = "Ticket Count: " + ticketCount;
        return ticketInfo.getBytes(StandardCharsets.UTF_8);
    }}
