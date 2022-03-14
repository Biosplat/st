const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1E2127", /* black   */
  [1] = "#E06C75", /* red     */
  [2] = "#98C379", /* green   */
  [3] = "#D19A66", /* yellow  */
  [4] = "#61AFEF", /* blue    */
  [5] = "#C678DD", /* magenta */
  [6] = "#56B6C2", /* cyan    */
  [7] = "#ABB2BF", /* white   */

  /* 8 bright colors */
  [8]  = "#5C6370",  /* black   */
  [9]  = "#E06C75",  /* red     */
  [10] = "#98C379", /* green   */
  [11] = "#D19A66", /* yellow  */
  [12] = "#61AFEF", /* blue    */
  [13] = "#C678DD", /* magenta */
  [14] = "#56B6C2", /* cyan    */
  [15] = "#FFFFFF", /* white   */

  /* special colors */
  [256] = "#1E2127", /* background */
  [257] = "#ABB2BF", /* foreground */
  [258] = "#5C6370",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
