## Εκφώνηση
Μια επιχείρηση πρόκειται να ανοίξει δύο καταστήματα σε έναν μεγάλο εμπορικό δρόμο. Ο δρόμος αποτελείται από N τετράγωνα και κάθε τετράγωνο i αποφέρει στην επιχείρηση κέδρος a_i (όπου a_i ένας θετικός ακέραιος), εφόσον το τετράγωνο i καλυφθεί από κάποιο κατάστημα. Κάθε κατάστημα καλύπτει K διαδοχικά τετράγωνα. Aν ένα τετράγωνο i καλύπτεται και από τα δύο καταστήματα, το κέρδος που αποφέρει στην επιχείρηση παραμένει a_i. Ζητείται να υπολογίσουμε το μέγιστο κέρδος που μπορεί να έχει η εταιρεία ανοίγοντας δύο καταστήματα που καλύπτουν Κ διαδοχικά τετράγωνα το καθένα.

## Δεδομένα εισόδου
Η πρώτη γραμμή της εισόδου θα περιέχει τους ακέραιους αριθμούς Ν και Κ χωρισμένους με ένα κενό διάστημα. Η δεύτερη γραμμή της εισόδου θα περιέχει Ν ακεραίους αριθμούς, που αντιστοιχούν στο κέρδος της εταιρείας από κάθε τετράγωνο, χωρισμένους ανά δύο με ένα κενό διάστημα. Να θεωρήσετε ως δεδομένο ότι η είσοδος θα είναι έγκυρη και ότι οι αριθμοί δε θα υπερβαίνουν τα όρια που αναγράφονται παρακάτω.

## Δεδομένα εξόδου
Η έξοδος πρέπει να αποτελείται από ακριβώς μία γραμμή που θα περιέχει ακριβώς έναν ακέραιο αριθμό, το μέγιστο κέρδος θα έχει η εταιρεία ανοίγοντας δύο καταστήματα που καλύπτουν Κ διαδοχικά τετράγωνα το καθένα.

## Περιορισμοί
```
3 <= Ν <= 2.000.000
1 <= Κ <= N/2
1 <= a_i <= 1.000.000
1 <= \sum_{i=1}^N a_i <= 1.000.000.000
```
Όριο χρόνου εκτέλεσης: 1 sec.
Όριο μνήμης: 64 MB.
## Παράδειγμα εισόδου
```
10 3
2 4 15 12 10 1 1 20 4 10
```
## Παράδειγμα εξόδου
```71```
## Παράδειγμα εισόδου 2
```
10 3
1 5 20 20 20 15 10 1 1 1
```
## Παράδειγμα εξόδου 2
```90```