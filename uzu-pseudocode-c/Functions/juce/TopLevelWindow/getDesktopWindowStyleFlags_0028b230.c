// Function : getDesktopWindowStyleFlags
// Namespace: juce:TopLevelWindow
// Entry    : 0028b230
// Prototype: uint getDesktopWindowStyleFlags(TopLevelWindow * this)
// Body     : 0028b230 - 0028b249


/* juce::TopLevelWindow::getDesktopWindowStyleFlags() const */

uint __thiscall juce::TopLevelWindow::getDesktopWindowStyleFlags(TopLevelWindow *this)

{
  return (uint)(byte)this[0xee] << 3 | (uint)(byte)this[0xed] << 8 | 1;
}


