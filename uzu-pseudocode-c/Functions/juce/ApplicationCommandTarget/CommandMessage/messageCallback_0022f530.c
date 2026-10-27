// Function : messageCallback
// Namespace: juce:ApplicationCommandTarget:CommandMessage
// Entry    : 0022f530
// Prototype: undefined messageCallback(CommandMessage * this)
// Body     : 0022f530 - 0022f579


/* juce::ApplicationCommandTarget::CommandMessage::messageCallback() */

void __thiscall
juce::ApplicationCommandTarget::CommandMessage::messageCallback(CommandMessage *this)

{
  ApplicationCommandTarget *this_00;
  bool bVar1;
  
  if ((*(long *)(this + 0x10) != 0) &&
     (this_00 = *(ApplicationCommandTarget **)(*(long *)(this + 0x10) + 0x10),
     this_00 != (ApplicationCommandTarget *)0x0)) {
    bVar1 = isCommandActive(this_00,*(undefined4 *)(this + 0x18));
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0022f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_00 + 0x28))(this_00,this + 0x18);
      return;
    }
  }
  return;
}


