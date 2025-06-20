# BioBatch

BioBatch is a growth medium calculator for cell proliferation, written in C/C++ based on popular growth media recipes like PDA, LB, YPD etc. 
For Windows, Linux and MacOS 11.7.10 and above.

<img width="762" alt="Image" src="https://github.com/user-attachments/assets/e1d9adfa-bf01-41ea-87f2-d5b5df16ddf0" />

Growth media included:
- PDA
- YPD
- LB
- NA
- N2
- SDA
- TB
- Blood Agar

More recipes will be added in the future.
### For Linux & macOS:
- Run "chmod +x" first(replace 0.x.x with your version).
```
sudo chmod +x biobatch_linux_0.x.x
``` 
- To run BioBatch natively, move it to bin folder by executing the following command:
```
sudo mv biobatch_macos_0.x.x /usr/local/bin/biobatch
```
- Then run it.
```
biobatch
```
### For Windows:
- Move "biobatch_windows_0.x.x.exe" to C:\Windows\System32\ or add to PATH.
> [!IMPORTANT]
> If any bugs or wrong information are encountered, please message me at mikeph526@outlook.com

>[!CAUTION]
> Always double-check the quantities before application.


### Changelog:
- 1.0.0:
(https://github.com/mikeph52/BioBatch/issues/3) Final version released for macOS. About section added and menu errors fixed.
- 0.16.0:
(https://github.com/mikeph52/BioBatch/issues/2) Documentation for Blood Agar fixed.
- 0.15.2:
(https://github.com/mikeph52/BioBatch/issues/1) Missing DLLs fixed in Windows version.
- 0.15.0:
Blood Agar medium added. Minor bugs fixed.
- 0.14.0:
TB medium added. Documentation errors fixed.
- 0.13.0:
Minor bugs fixed. SDA medium added. Documentation for each media added.
- 0.12.0:
Minor bugs fixed. N2 medium added. Help option added.
- 0.11.0:
Major bugs fixed. NA medium added.
- 0.10.3:
Minor bugs fixed.


### Citations:
- Pioli, P.D. (2019) Protocol: Luria-Bertani (LB) Media/Broth Recipe. Available at: https://www.med.wmich.edu/sites/default/files/Pioli_Lab_LB_Media_Recipe.pdf. 
- https://sharebiology.com/ypd-media/
- https://www.atcc.org/-/media/product-assets/documents/microbial-media-formulations/3/3/6/atcc-medium-336.pdf?rev=d9160ad44d934cd8b65175461abbf3b9
- https://sharebiology.com/sabouraud-dextrose-agar-sda/
