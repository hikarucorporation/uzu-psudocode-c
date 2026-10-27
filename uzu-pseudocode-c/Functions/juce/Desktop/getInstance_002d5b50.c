// Function : getInstance
// Namespace: juce:Desktop
// Entry    : 002d5b50
// Prototype: Desktop * getInstance(void)
// Body     : 002d5b50 - 002d5b86


/* juce::Desktop::getInstance() */

Desktop * juce::Desktop::getInstance(void)

{
  Desktop *this;
  
  if (instance == (Desktop *)0x0) {
    this = operator_new(0x1d0);
                    /* try { // try from 002d5b6d to 002d5b74 has its CatchHandler @ 002d5b87 */
    Desktop(this);
    instance = this;
  }
  return instance;
}


