# An implementation of the hsitorical Enigma I machine in C++!

## What is it? 

The enigma machine was an electromechanical cryptographic device resembling a typewriter used to encode messages during the second World War.


Here is an explanation of the main components and of the encryption/decryption process:

- **Settings:** The Enigma machine had four essential settings to configure for encryption. These included:

   - **Rotors:** The machine had rotating disks, where each rotor not only symbolized a specific letter of the alphabet but also intricately connected every letter to a different one through internal wiring. Typically, operators had a choice of 3 to 5 rotors depending on the model of the Enigma. Pressing a key initiated a first rotation of the right-most rotor and sent an electrical signal through this complex internal wiring, resulting in the repeated substitution of the input letter.

   - **Ring Settings:** Each rotor had a movable ring that could be set to a different position. This additional setting added another layer of complexity to the encryption process.

   - **Reflector:** The Enigma machine had a fixed reflector that ensured the electrical signal was sent back through the rotors, creating a reciprocal nature to the encryption process.

   - **Plugboard:** The Enigma machine also had a plugboard, which allowed the operator to swap pairs of letters. This added an extra layer of complexity to the encryption.

- **Encryption Process:** When a message was typed, the electrical signal first passed through the plugboard, where pairs of letters could be swapped, adding an extra layer of complexity. It then traversed through the rotating rotors, which altered the electrical pathway and substituted the input letter. The signal then reached the fixed reflector, and the process was reversed as it passed back through the rotors. Finally, the signal went through the plugboard again, providing a final layer of substitution before the encrypted letter lit up on the machine. Importantly, every time a key was pressed, at least one rotor would rotate, causing the input letter to be substituted into a different letter each time. The daily-changing settings, including rotor positions, ring settings, reflector configuration, and plugboard connections, made it extremely challenging for adversaries to decipher the messages.

- **Decryption:** The recipient used an Enigma machine with the same daily settings to decrypt the message. As long as the sender and receiver had the correct settings, they could communicate securely.

The strength of the Enigma code lay in its complexity, as the settings provided a vast number of possible combinations. However, it was Polish mathematicians who first broke the Enigma encryption in the 1930s. The encryption was eventually further deciphered by Allied codebreakers as newer and improved models of the machine were frequently released. Notably was Bletchley Park's contribution to the war effort, amongst them British mathematician Alan Turing. The successful decryption of Enigma-encrypted messages played a crucial role in Allied intelligence during the war.
