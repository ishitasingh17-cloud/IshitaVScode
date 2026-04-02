// Define the base address for the UART (Check your specific CF manual)
#define UART_BASE 0xFC060000 
#define UART_THR  (*(volatile unsigned char*)(UART_BASE + 0x00))

class Serial {
public:
    void send(char c) {
        // Simple polling (wait for Ready bit, then send)
        UART_THR = c;
    }
    
    void print(const char* str) {
        while (*str) send(*str++);
    }
};

int main() {
    Serial debug;
    debug.print("ColdFire 32-bit C++ Booted\n");
    
    while(true) {
        // Main Loop
    }
    return 0;
}