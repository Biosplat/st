const char *colorname[] = {

  /* 8 normal colors */
  //One Dark
  // [0] = "#1E2127", /* black   */
  // [1] = "#E06C75", /* red     */
  // [2] = "#98C379", /* green   */
  // [3] = "#D19A66", /* yellow  */
  // [4] = "#61AFEF", /* blue    */
  // [5] = "#C678DD", /* magenta */
  // [6] = "#56B6C2", /* cyan    */
  // [7] = "#ABB2BF", /* white   */

  // Tokyo Night
  [0] = "#1A1B26", /* black   */ 
  [1] = "#F7768E", /* red     */ 
  [2] = "#E0AF68", /* green   */ 
  [3] = "#9ECE6A", /* yellow  */ 
  [4] = "#7AA2F7", /* blue    */ 
  [5] = "#9A7ECC", /* magenta */ 
  [6] = "#4ABAAF", /* cyan    */ 
  [7] = "#ACB0D0", /* white   */ 

  /* 8 bright colors */
  // One Dark
  // [8]  = "#5C6370", /* black   */
  // [9]  = "#E06C75", /* red     */
  // [10] = "#98C379", /* green   */
  // [11] = "#D19A66", /* yellow  */
  // [12] = "#61AFEF", /* blue    */
  // [13] = "#C678DD", /* magenta */
  // [14] = "#56B6C2", /* cyan    */
  // [15] = "#FFFFFF", /* white   */

  // Tokyo Night
  [8] = "#4E5173",  /* black   */
  [9] = "#E06C75",  /* red     */
  [10] = "#D19A66", /* green   */
  [11] = "#98C379", /* yellow  */
  [12] = "#61AFEF", /* blue    */
  [13] = "#C678DD", /* magenta */
  [14] = "#56B6C2", /* cyan    */
  [15] = "#ABB2BF", /* white   */

  /* special colors */
  // [256] = "#1E2127", /* background */
  // [257] = "#ABB2BF", /* foreground */
  // [258] = "#5C6370",     /* cursor */

};

/* Default colors (colorname index)
 * foreground, background, cursor */
//  unsigned int defaultfg = 257;
//  unsigned int defaultcs = 258;
//  unsigned int defaultrcs= 258;

unsigned int defaultbg = 0;
unsigned int defaultfg = 7;
unsigned int defaultcs = 8;
unsigned int defaultrcs= 8;
