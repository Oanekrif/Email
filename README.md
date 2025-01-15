This C program extracts and displays the individual components of an email address (name, email provider, and domain) using only printf and scanf functions. </br> 
The user is prompted to enter an email in the format name@provider.domain. </br> 
The program then reads each part separately using the scanf format specifiers %[^@], %[^.], and %s to capture the name before the @, the provider between the @ and the . symbols, and the domain after the . . </br> 
The program consumes the @ and . symbols with getchar() to ensure accurate extraction. </br> 
Finally, the extracted components are displayed using printf. All of this functionality is implemented using basic input/output operations in C with scanf and printf.

<img src="https://github.com/Oanekrif/Email/blob/master/image.png" width="900">
