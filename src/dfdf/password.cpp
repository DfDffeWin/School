#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>

void simulateHackingProcess() {
    const std::vector<std::string> stages = {
        "[*] Initializing hack module...",
        "[*] Connecting to server...",
        "[*] Bypassing firewall...",
        "[*] Extracting encryption keys...",
        "[*] Accessing account credentials...",
        "[*] Downloading data...",
        "[*] Cleaning up traces...",
        "[*] Hack complete."
    };

    const std::vector<std::string> fakeLogs = {
        "Connecting to 192.168.1.1...",
        "Connection established.",
        "Sending exploit packet...",
        "Exploit packet acknowledged.",
        "Gaining shell access...",
        "Shell access granted.",
        "Downloading /etc/passwd...",
        "Password file downloaded.",
        "Running privilege escalation...",
        "Privilege escalation successful.",
        "Accessing user data...",
        "User data found.",
        "Decrypting user data...",
        "Decryption complete.",
        "Downloading user data...",
        "User data downloaded.",
        "Removing logs...",
        "Logs removed.",
        "Disconnecting from server...",
        "Disconnected."
    };

    const std::vector<std::string> scareMessages = {
        "[!] Warning: Detected anti-hacking software...",
        "[!] Warning: Traces of your IP detected...",
        "[!] Warning: Possible counter-hack attempt...",
        "[!] Alert: Security breach detected...",
        "[!] Alert: Possible law enforcement notification..."
    };

    const std::vector<std::string> dataFiles = {
        "passwords.txt",
        "bank_details.txt",
        "emails.txt",
        "private_keys.txt",
        "browser_history.txt"
    };

    for (const auto& stage : stages) {
        std::cout << stage << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    std::cout << "\n[+] Detailed logs:\n";

    for (const auto& log : fakeLogs) {
        std::cout << log << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    std::cout << "\n[+] Generating fake passwords...\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << "User" << i + 1 << ": " << "password" << rand() % 1000 << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    std::cout << "\n[+] Scanning for sensitive data...\n";
    for (const auto& file : dataFiles) {
        std::cout << "[*] Found " << file << "...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\n[*] Injecting malware...\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "[*] Malware package " << i + 1 << " deployed." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\n[*] Triggering scare messages...\n";
    for (const auto& message : scareMessages) {
        std::cout << message << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\n[*] Hack complete.\n";
}

// Function to perform matrix addition
std::vector<std::vector<int>> matrixAddition(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

// Function to perform matrix multiplication
std::vector<std::vector<int>> matrixMultiplication(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    std::vector<std::vector<int>> result(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

// Function to perform matrix transpose
std::vector<std::vector<int>> matrixTranspose(const std::vector<std::vector<int>>& A) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(cols, std::vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = A[i][j];
        }
    }
    return result;
}

int main() {

    std::vector<std::vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> B = {{7, 8, 9}, {10, 11, 12}};

    // Matrix addition
    std::vector<std::vector<int>> additionResult = matrixAddition(A, B);
    std::cout << "Matrix Addition Result:" << std::endl;
    for (const auto& row : additionResult) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    // Matrix multiplication
    std::vector<std::vector<int>> multiplicationResult = matrixMultiplication(A, B);
    std::cout << "Matrix Multiplication Result:" << std::endl;
    for (const auto& row : multiplicationResult) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    // Matrix transpose
    std::vector<std::vector<int>> transposeResult = matrixTranspose(A);
    std::cout << "Matrix Transpose Result:" << std::endl;
    for (const auto& row : transposeResult) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Hacker Tool v1.0\n";
    std::cout << "------------------\n";
    std::cout << "[*] Starting hack sequence...\n";

    simulateHackingProcess();

    std::cout << "[*] Press any key to exit...\n";
    std::cin.get();

    return 0;
}
