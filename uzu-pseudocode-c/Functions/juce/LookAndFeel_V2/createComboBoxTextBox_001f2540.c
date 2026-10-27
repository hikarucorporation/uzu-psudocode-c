// Function : createComboBoxTextBox
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f2540
// Prototype: Label * createComboBoxTextBox(void)
// Body     : 001f2540 - 001f2581


/* juce::LookAndFeel_V2::createComboBoxTextBox(juce::ComboBox&) */

Label * juce::LookAndFeel_V2::createComboBoxTextBox(void)

{
  Label *this;
  undefined1 *local_20;
  undefined1 *local_18;
  
  this = operator_new(0x218);
  local_18 = &DAT_0061ac58;
  local_20 = &DAT_0061ac58;
                    /* try { // try from 001f2565 to 001f2576 has its CatchHandler @ 001f2582 */
  Label::Label(this,(long *)&local_18,(long *)&local_20);
  return this;
}


