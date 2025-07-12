# Electricity Billing System in C

This is a simple C program that simulates an **Electricity Billing System** for different types of customers: Residential, Commercial, and Industrial. The program calculates electricity charges based on usage (in kWh) and stores customer data in a text file.

## 📌 Features

- Calculates electricity bill for up to 42,500 customers.
- Supports three customer types:
  - Residential
  - Commercial
  - Industrial
- Applies different charge rates based on usage.
- Tracks:
  - Number of customers per type
  - Total revenue generated
  - Number of commercial customers exceeding 500kWh
- Stores customer usage data in a file (`KUDSE243F-011.txt`).

## 📊 Billing Rules

### Residential Customers
| Usage (kWh)         | Rate (LKR/kWh) |
|---------------------|----------------|
| 0–100               | 0.12           |
| 101–300             | 0.15           |
| 301 and above       | 0.20           |

### Commercial Customers
| Usage (kWh)         | Rate (LKR/kWh) |
|---------------------|----------------|
| 0–500               | 0.18           |
| Above 500           | 0.25           |

### Industrial Customers
| All usage levels    | 0.30           |

## 📁 Output

The program writes each customer's account number and monthly usage to the file `KUDSE243F-011.txt`.

After entering data, the program displays a final report:
- Total number of customers per type
- Total revenue
- Number of commercial users exceeding 500kWh

## 🚀 How to Run

### Requirements
- A C compiler (e.g., GCC)

### Compile
```bash
gcc -o billing billing.c
