#Chuỗi Ký Tự
[1. Khái niệm](khainiem)

[2. Các thao tác trên chuỗi](thaotac)

<a name"khainiem"></a>
###1. Khái niệm:
   
   Chuỗi ký tự là một dãy các ký tự đặt trong dấu nháy kép (") . Chuỗi rỗng được ký hiệu bằng hai dấu nháy kép đi liền nhau (""). Mỗi chuỗi ký tự được cấp phát một khoảng nhớ cho một mảng kiểu char chứa các ký tự của chuỗi và chứa thêm ký tự `'\0'` là ký tự kết thúc chuỗi.
   
   Mỗi ký tự của chuỗi được chứa trong một phần tử của mảng. Chuỗi ký tự là một trường hợp riêng của mảng một chiều khi mỗi thành phần của mảng là ký tự.
   
   Chuỗi ký tự thường được khai báo theo khai báo của hai mẫu `char ten_chuoi[]`; hoặc `char *ten_chuoi`;
   
<a name"thaotac"></a>
###2. Các thao tác trên chuỗi:

   Sử dung thư viện `<String.h>`:
   
   a. Hàm **strlen** `int strlen(char s[]);` 
   Trả về độ dài của chuỗi s, chính là chỉ số của ký tự *NULL* trong chuỗi.
     
   b. Hàm **strcpy** `strcpy(char dest[], char source[]);`
   Sao chép nội dung chuỗi source vào chuỗi dest.
    
   c. Hàm **strncpy** `strncpy(char dest[], char source[],int n);`
    Sao chép n ký tự trong chuỗi source vào chuỗi dest.Trong trường hợp không có đủ n ký tự trong source thì hàm sẽ điền thêm các ký tự trắng vào chuỗi dest. Ngừng sao chép khi hết n kí tự.
    
   d. Hàm **strchr** `char *strchr(char s[], char c);`
   Tìm lần xuất hiện đầu tiên của ký tự c trong chuỗi s, trả về địa chỉ cho chuỗi này.
   
   e. Hàm **strrchr** `char *strrchr(char s[], char c);`
   Tìm lần xuất hiện đầu tiên của ký tự c trong chuỗi s, trả về địa chỉ cho chuỗi này. Bắt đầu tìm kiếm từ cuối chuỗi.
     
   f. Hàm **strcat** `strcat(char ch1[], char ch2[]);`
   Nối chuỗi ch2 vào chuỗi ch1. Sau lời gọi hàm này thì độ dài chuỗi ch1 bằng tổng độ dài của chuỗi ch1 và chuỗi ch2 trước lời gọi này.
     
   g. Hàm **strncat** `strcat(char ch1[], char ch2[],int n);`
   Nối n ký tự đầu tiên của chuỗi ch2 vào chuỗi ch1.
     
   h. Hàm **strstr** `char *strstr(char ch1[], char ch2[]);`
   Tìm kiếm chuỗi ch2 trong chuỗi ch1. Trả về địa chỉ của lần xuất hiện đầu tiên của ch2 trong ch1 hoặc *NULL* khi không tìm thấy.
   
   i. Hàm **strcmp** `int strcmp(char ch1[], char ch2[]);`
   So sánh hai chuỗi ch1 và ch2 . Nguyên tắc so sánh theo kiểu từ điển. Gía trị trả về:
   
    =0 nếu chuỗi ch1 bằng chuỗi ch2
   
    >0 nếu chuỗi ch1 lớn hơn chuỗi ch2
    
    <0 nếu chuỗi ch1 bé hơn chuỗi ch2

   k. Hàm **strncmp** `int strcmp(char ch1[], char ch2[], int n);`
   Tương tự hàm **strcmp** nhưng giới hạn về việc so sánh n ký tự đầu tiên của hai chuỗi.
   
   l. Hàm **stricmp** `int stricmp(char ch1[], char ch2[]);`
   Tương tự hàm **Strcmp** nhưng không phân biệt chữ hoa và chữ thường.
   
   m. Hàm **strincmp** `int strincmp(char ch1[], char ch2[], int n);`
   Tương tự hàm **stricmp** nhưng giới hạn n ký tự đầu tiên của hai chuỗi.
   
   n. Hàm **strlwr** `strlwr(char s[]);`
   Chuyển đổi chữ in sang chữ thường trong chuỗi s.
   
   o. Hàm **struppr** `struppr(char s[]);`
   Chuyển đổi chữ thường sang chữ in.
   
   p. Hàm **strset** `strset(char s[], char c);`
   Khởi đầu tất cả các ký tự của chuỗi s bằng ký tự c.
   
   q. Hàm **strnset** `strnset(char s[], char c, int n);`
   Khởi đầu cho n ký tự của chuỗi s bằng ký tự c.
