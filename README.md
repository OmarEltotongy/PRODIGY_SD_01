# PRODIGY_SD_01

# Temperature Converter Program

### Author: Omar Eltoutongy

---

## Description

The **Temperature Converter Program** allows users to convert temperatures between three different scales: Celsius, Fahrenheit, and Kelvin. It supports conversions in either direction and offers an interactive menu to perform multiple conversions or exit the program.

---

## How to Run

1. **Compile the program** using a C++ compiler:

   ```bash
   g++ PRODIGY_SD_01.cpp -o temperature_converter
   ```

2. **Run the compiled program**:

   ```bash
   ./temperature_converter
   ```

---

## Program Menu

When the program starts, you will be greeted with the following options:

- **Press 1** to Convert Temperature.
- **Press 2** to Exit the Program.

---

## Temperature Conversion

Once the conversion option is selected, you will be prompted to:

1. **Enter a temperature** (numeric value).
2. **Specify the scale** of the entered temperature:
   - **Celsius** (Enter `c` or `C`)
   - **Fahrenheit** (Enter `f` or `F`)
   - **Kelvin** (Enter `k` or `K`)

The program will then display the converted temperatures for the other two scales.

### Conversion Example:

For instance, if you enter **100°C**, the program will convert it to:

- **Fahrenheit**: 212°F
- **Kelvin**: 373.15K

---

## Error Handling

- The program checks if a valid numeric temperature is entered.
- It also ensures that the temperature scale is specified correctly (`c`, `f`, `k`).
- If invalid inputs are provided, the user is prompted to re-enter them.

---

## Conversion Formulas

- **Celsius to Fahrenheit**:  
  \[ F = \left( C \times \frac{9}{5} \right) + 32 \]
  
- **Celsius to Kelvin**:  
  \[ K = C + 273.15 \]

- **Fahrenheit to Celsius**:  
  \[ C = \left( F - 32 \right) \times \frac{5}{9} \]

- **Fahrenheit to Kelvin**:  
  \[ K = \left( F - 32 \right) \times \frac{5}{9} + 273.15 \]

- **Kelvin to Celsius**:  
  \[ C = K - 273.15 \]

- **Kelvin to Fahrenheit**:  
  \[ F = \left( K - 273.15 \right) \times \frac{9}{5} + 32 \]

---

## Future Improvements

- Add more temperature scales (e.g., Rankine).
- Implement a graphical user interface (GUI).
- Provide options for mass conversions (converting lists of temperatures at once).

---

Enjoy using the **Temperature Converter Program**!
