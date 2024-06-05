/*
OpenSSL   -> Usada para criptografia e comunicação segura. Ela implementa os protocolos SSL e TLS, bem como uma vasta gama de algoritmos criptograficos
libpcap   -> Biblioteca de captura de pacotes que fornece uma interface para capturar e inspecionar pacotes de rede.
GnuTLS    -> Biblioteca que implementa os protocolos SSL, TLS e DTLS, focando em flexibilidade e extensibilidade.
Libgcrypt -> Biblioteca de criptografia que faz parte do projeto GnuPG. Ela fornece uma ampla gama de algoritmos criptográficos.
Libssh    -> Biblioteca que implementa o protocolo SSH, permitindo a criação de clientes e servidores SSH.
libnet    -> Biblioteca que facilita a construção e injeção de pacotes de rede.
Libpcap   -> Biblioteca de captura de pacotes que permite a captura e análise de pacotes de rede ao nível link de dados, usada amplamente em ferramentas de análise de rede.
Capstone  -> Biblioteca que fornece uma API para desAssemblar binarios.

---------------------------------------------------------------------------------------------------------

Projetos:
1) Ferramenta de Criptografia
    Bibliotecas necessárias:
        - OpenSSL (<openssl/evp.h>, <openssl/aes.h>, <openssl/rsa.h>);
        - Libsodium (<sodium.h>);

2) Analisador de malware básico
    Bibliotecas necessárias:
        - libelf (<libelf.h>)
        - Capstone (<capstone/capstone.h>)
        - YARA (<yara.h>)

3) Firewall simples
    Bibliotecas necessárias:
        -Libpcap (<pcap.h>)
        -iptables libraries (libiptc - <libiptc/libiptc.h>)

4) Ferramenta de scanning de portas
    Bibliotecas necessárias:
        - <sys/sockets.h>
        - <netinet/in.h> e <arpa/inet.h>
        - <poll.h> ou <select.h>

5) Detector de intrusão
    Biliotecas necessárias:
        - Libpcap (<pcap.h>)
        - nDPI (<ndpi_api.h>)

6) Gerenciador de senhas
    Bibliotecas necessárias:
        - OpenSSL (<openssl/evp.h>)
        - SQLite (<sqlite3.h>)

7) Simulador de ataques DoS/DDoS
    Bibliotecas necessárias:
        - <sys/sockets.h>, <netinet/in.h>, <arpa/inet.h>
        - Libpcap (<pcap.h>)

8) Analisador de Logs
    Bibliotecas necessárias:
        - <regex.h>
        - <syslog.h>
        - Libyaml (<yaml.h>) ou JSON-C (<json-c/json.h>)

9) Implementação de um protocolo de autenticação
    Bibliotecas necessárias:
        - OpenSSL (<openssl/evp.h>, <openssl/hmac.h>)
        - GSSAPI (<gssapi.h>)

10) Sistema de detecção de rootkits
    Bibliotecas necessárias:
        - libprocps (<proc/readproc.h>)
        - <sys/stat.h> e <dirent.h>
        - Capstone <capstone/capstone.h>

*/