class Server:
    def handle_request(self):
        print("Handling standard HTTP request...")

class SecureServer(Server):
    def handle_request(self):
        print("[Security] Verifying encryption certificates...")
        print("Handling secure HTTPS request...")

servers = [Server(), SecureServer()]

for s in servers:
    s.handle_request()
