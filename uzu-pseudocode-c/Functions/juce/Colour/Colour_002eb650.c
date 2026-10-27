// Function : Colour
// Namespace: juce:Colour
// Entry    : 002eb650
// Prototype: undefined Colour(Colour * this, Colour param_2, Colour param_3, Colour param_4)
// Body     : 002eb650 - 002eb65d


/* juce::Colour::Colour(unsigned char, unsigned char, unsigned char) */

void __thiscall juce::Colour::Colour(Colour *this,Colour param_2,Colour param_3,Colour param_4)

{
  *this = param_4;
  this[1] = param_3;
  this[2] = param_2;
  this[3] = (Colour)0xff;
  return;
}


