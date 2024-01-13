# An implementation of the hsitorical Enigma I machine in C++!

## What is it? 

The enigma machine was an electromechanical cryptographic device resembling a typewriter used to encode messages during the second World War.


Here is an explanation of the main components and of the encryption/decryption process:

- **Settings/main components:** The Enigma machine had four essential settings to configure for encryption. These included:

   - **Rotors:** The machine had rotating disks, where each rotor not only symbolized a specific letter of the alphabet but also intricately connected every letter to a different one through internal wiring. Pressing a key initiated an electrical signal through this complex internal wiring, resulting in a substitution of the input letter.

   - **Ring Settings:** Each rotor had a movable ring that could be set to a different position. This additional setting added another layer of complexity to the encryption process.

   - **Reflector:** The Enigma machine had a fixed reflector that ensured the electrical signal was sent back through the rotors, creating a reciprocal nature to the encryption process.

   - **Plugboard:** The Enigma machine also had a plugboard, which allowed the operator to swap pairs of letters. This added an extra layer of complexity to the encryption.

- **Encryption Process:** When a message was typed, the electrical signal passed through the rotors, was reflected by the reflector, and then through the plugboard, creating a complex substitution cipher. The encrypted letter would light up on the machine, and the operator would write it down. Importantly, the daily-changing settings, including rotor positions, ring settings, reflector configuration, and plugboard connections, added an extra layer of security, making it challenging for adversaries to decipher the messages.

- **Decryption:** The recipient used an Enigma machine with the same daily settings to decrypt the message. As long as the sender and receiver had the correct settings, they could communicate securely.

The strength of the Enigma code lay in its complexity, as the settings provided a vast number of possible combinations. However, the code was eventually broken by Allied codebreakers, most notably at Bletchley Park in England, led by mathematician Alan Turing. The successful decryption of Enigma-encrypted messages played a crucial role in Allied intelligence during the war.
