#include <stdio.h>
enum State {IDLE,COIN_INSERTED, DISPENSE,OUT_OF_STOCK};
enum Command {INSERT_COIN = 1,SELECT_ITEM,RESTOCK,CANCEL};
enum State nextState(enum State state,enum Command command,int stock) {
    switch (state) {
        case IDLE:
            if (command == INSERT_COIN && stock > 0)
                return COIN_INSERTED;
            if (stock <= 0)
                return OUT_OF_STOCK;
            return IDLE;
        case COIN_INSERTED:
            if (command == SELECT_ITEM && stock > 0)
                return DISPENSE;
            if (command == CANCEL)
                return IDLE;
            if (stock <= 0)
                return OUT_OF_STOCK;
            return COIN_INSERTED;
        case DISPENSE:
            return IDLE;
        case OUT_OF_STOCK:
            if (command == RESTOCK && stock > 0)
                return IDLE;
            return OUT_OF_STOCK;
    }
    return state;
}
void displayState(enum State state) {
    switch (state) {
        case IDLE:
            printf("IDLE");
            break;
        case COIN_INSERTED:
            printf("COIN_INSERTED");
            break;
        case DISPENSE:
            printf("DISPENSE");
            break;
        case OUT_OF_STOCK:
            printf("OUT_OF_STOCK");
            break;
    }
}
int main() {
    enum State state = IDLE;
    enum State newState;
    enum Command command;
    int stock = 3;
    int choice;
    do {
        printf("\n===== VENDING MACHINE =====\n");
        printf("\nCurrent State: ");
        displayState(state);
        printf("\nStock: %d\n", stock);
        printf("\n1. Insert Coin");
        printf("\n2. Select Item");
        printf("\n3. Restock");
        printf("\n4. Cancel");
        printf("\n5. Exit");
        printf("\nEnter command: ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Vending Machine Closed!\n");
            break;
        }
        if (choice < 1 || choice > 4) {
            printf("Invalid command!\n");
            continue;
        }
        command = choice;
        newState = nextState(state, command, stock);
        printf("\nTransition: ");
        displayState(state);
        printf(" -> ");
        displayState(newState);
        if (newState == DISPENSE) {
            printf("\nItem dispensed successfully!\n");
            stock--;
            state = IDLE;
        }
        else if (newState == OUT_OF_STOCK) {
            printf("\nMachine is out of stock!\n");
            state = OUT_OF_STOCK;
        }
        else if (command == RESTOCK && stock > 0) {
            printf("\nMachine restocked!\n");
            state = newState;
        }
        else {
            if (newState == state) 
                printf("\nInvalid transition or command ignored!\n");
            state = newState;
        }
    } while (1);
    return 0;
}