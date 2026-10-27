// Function : png_err
// Namespace: juce:pnglibNamespace
// Entry    : 00399ad0
// Prototype: undefined png_err(pnglibNamespace * this)
// Body     : 00399ad0 - 00399aeb


/* juce::pnglibNamespace::png_err(juce::pnglibNamespace::png_struct_def const*) */

void __thiscall juce::pnglibNamespace::png_err(pnglibNamespace *this)

{
  if ((this != (pnglibNamespace *)0x0) && (*(code **)this != (code *)0x0)) {
    (**(code **)this)(this,&DAT_005e2ee7);
  }
                    /* WARNING: Subroutine does not return */
  png_default_error();
}


