// Function : setBounds
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3130
// Prototype: undefined setBounds(LinuxComponentPeer * this, int * param_2, LinuxComponentPeer param_3)
// Body     : 002d3130 - 002d31ad


/* juce::LinuxComponentPeer::setBounds(juce::Rectangle<int> const&, bool) */

void __thiscall
juce::LinuxComponentPeer::setBounds
          (LinuxComponentPeer *this,int *param_2,LinuxComponentPeer param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_10;
  long local_8;
  
  uVar1 = (ulong)(uint)param_2[2];
  if (param_2[2] < 1) {
    uVar1 = 1;
  }
  uVar2 = 1;
  if (0 < param_2[3]) {
    uVar2 = param_2[3];
  }
  local_10 = *(undefined8 *)param_2;
  local_8 = ((ulong)uVar2 << 0x20) + uVar1;
  if ((((*(int *)(this + 0x130) != *param_2) || (*(int *)(this + 0x134) != param_2[1])) ||
      (*(int *)(this + 0x138) != (int)uVar1)) ||
     ((*(uint *)(this + 0x13c) != uVar2 || (this[0x154] != param_3)))) {
    forceSetBounds(this,&local_10,param_3);
  }
  return;
}


