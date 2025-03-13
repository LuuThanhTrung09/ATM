#include <stdio.h>

// Khai báo số dư tài khoản mặc định
double balance = 1000.0;

// Hàm hiển thị menu
void displayMenu() {
    printf("\n===== ATM MÔ PHỎNG =====\n");
    printf("1. Kiểm tra số dư\n");
    printf("2. Rút tiền\n");
    printf("3. Gửi tiền\n");
    printf("4. Thoát\n");
    printf("Chọn một tùy chọn: ");
}

// Hàm kiểm tra số dư
void checkBalance() {
    printf("\nSố dư hiện tại: %.2f VND\n", balance);
}

// Hàm rút tiền
void withdrawMoney() {
    double amount;
    printf("\nNhập số tiền muốn rút: ");
    scanf("%lf", &amount);
    
    if (amount > balance) {
        printf("\nKhông đủ số dư!\n");
    } else if (amount <= 0) {
        printf("\nSố tiền không hợp lệ!\n");
    } else {
        balance -= amount;
        printf("\nBạn đã rút %.2f VND. Số dư mới: %.2f VND\n", amount, balance);
    }
}

// Hàm gửi tiền
void depositMoney() {
    double amount;
    printf("\nNhập số tiền muốn gửi: ");
    scanf("%lf", &amount);
    
    if (amount <= 0) {
        printf("\nSố tiền không hợp lệ!\n");
    } else {
        balance += amount;
        printf("\nBạn đã gửi %.2f VND. Số dư mới: %.2f VND\n", amount, balance);
    }
}

int main() {
    int choice;
    
    do {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                withdrawMoney();
                break;
            case 3:
                depositMoney();
                break;
            case 4:
                printf("\nCảm ơn bạn đã sử dụng ATM!\n");
                break;
            default:
                printf("\nLựa chọn không hợp lệ! Vui lòng chọn lại.\n");
        }
    } while (choice != 4);
    
    return 0;
}
