# Objective
RSA is a widely used public-key cryptographic algorithm that relies on mathematical properties of prime numbers and modular arithmetic.
# Algorithm
**Key Generation:**

1.Choose two large prime numbers, ppp and qqq.

2.Compute n=p×qn = p \times qn=p×q. This will be part of the public and private keys.

3.Calculate ϕ(n)=(p−1)×(q−1)\phi(n) = (p-1) \times (q-1)ϕ(n)=(p−1)×(q−1), where ϕ(n)\phi(n)ϕ(n) is Euler's totient function.

4.Choose an encryption key eee such that 1<e<ϕ(n)1 < e < \phi(n)1<e<ϕ(n) and eee is coprime with ϕ(n)\phi(n)ϕ(n).

5.Calculate the decryption key ddd such that d×e≡1 (mod ϕ(n))d \times e \equiv 1 \ (\text{mod} \ \phi(n))d×e≡1 (mod ϕ(n)). This ensures ddd is the modular multiplicative inverse of eee.

**Encryption:**


1.Convert the plaintext into numerical form.

2.Compute the ciphertext c≡me (mod n)c \equiv m^e \ (\text{mod} \ n)c≡me (mod n), where mmm is the numerical form of the plaintext.

**Decryption:**

1.Compute the plaintext m≡cd (mod n)m \equiv c^d \ (\text{mod} \ n)m≡cd (mod n), where ccc is the ciphertext.

# Explanation
**1.Key Generation:** Uses two prime numbers ppp and qqq to generate public and private keys.

**2.Encryption:** Applies the RSA encryption formula c≡me (mod n)c \equiv m^e \ (\text{mod} \ n)c≡me (mod n), where mmm is the plaintext.

**3.Decryption:** Reverts ciphertext to plaintext using m≡cd (mod n)m \equiv c^d \ (\text{mod} \ n)m≡cd (mod n), ensuring only the private key holder can decrypt the message
