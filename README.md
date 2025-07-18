# EchoSploit

**EchoSploit** is a lightweight DLL designed to hook into Roblox’s internal print function and demonstrate controlled message output via a console application environment. It showcases a basic print exploit technique with minimal overhead.

---

## Features

- Hooks Roblox internal print function via offset  
- Outputs messages with different print types  
- Simple MessageBox confirmation on injection/start  
- Minimal and clean code base, easy to extend  

---

## Requirements

- Windows OS (x64 recommended)  
- Roblox installed and running  
- Compatible C++ compiler supporting Windows API and DLL creation  

---

## Usage

1. Build the DLL using your preferred compiler (e.g., Visual Studio).  
2. Inject the DLL into the Roblox process (ensure correct Roblox version due to hardcoded offsets).  
3. On injection, a message box will appear confirming start.  
4. The DLL will print various messages internally using Roblox’s print function.  

---

## Disclaimer

This project is intended for educational purposes only. Use responsibly and at your own risk. The author is not responsible for misuse or violations of Roblox’s Terms of Service.

---

## Contributing

Contributions and improvements are welcome! Please fork the repo and create a pull request.

---

## License

[MIT License](LICENSE)
