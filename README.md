# CS121-Project-6-Heap-Of-Students

```mermaid
classDiagram

class Date {
    - string date;
    + Date();
    + void init(string dateInput);
}

class Address {
    - string streetAddress;
    - string townName;
    - string stateAbbreviation;
    - string zipCode;
    + Address();
    + void init(string streetAddressInput, string townNameInput, string stateAbbreviationInput, string ipCodeInput);
}

class Student {

}

Student --> Date
Student --> Address
```
