// Function : handleXEmbedMessage
// Namespace: juce:XWindowSystem
// Entry    : 002cca80
// Prototype: undefined handleXEmbedMessage(XWindowSystem * param_1, LinuxComponentPeer * param_2, long param_3, undefined8 param_4)
// Body     : 002cca80 - 002ccb2f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XWindowSystem::handleXEmbedMessage(juce::LinuxComponentPeer*, XClientMessageEvent&) const
    */

void __cdecl
juce::XWindowSystem::handleXEmbedMessage
          (XWindowSystem *param_1,LinuxComponentPeer *param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 5) {
    uVar1 = isFocused(param_1,*(long *)(param_2 + 0x120));
    if (((char)uVar1 == '\0') && (param_2[200] != (LinuxComponentPeer)0x0)) {
      param_2[200] = (LinuxComponentPeer)0x0;
      LinuxComponentPeer::isActiveApplication = 0;
      ComponentPeer::handleFocusLoss((ComponentPeer *)param_2);
      return;
    }
  }
  else if (param_3 == 4) {
    LinuxComponentPeer::isActiveApplication = 1;
    uVar1 = isFocused(param_1,*(long *)(param_2 + 0x120));
    if (((char)uVar1 != '\0') && (param_2[200] == (LinuxComponentPeer)0x0)) {
      param_2[200] = (LinuxComponentPeer)0x1;
      ComponentPeer::handleFocusGain((ComponentPeer *)param_2);
      return;
    }
  }
  else if (param_3 == 0) {
    *(undefined8 *)(param_2 + 0x128) = param_4;
    LinuxComponentPeer::updateWindowBounds(param_2);
    Component::setBounds
              (*(Component **)(param_2 + 8),(int)*(undefined8 *)(param_2 + 0x130),
               (int)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20),
               (int)*(undefined8 *)(param_2 + 0x138),
               (int)((ulong)*(undefined8 *)(param_2 + 0x138) >> 0x20));
    return;
  }
  return;
}


