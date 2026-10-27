// Function : messageCallback
// Namespace: juce:MessageManager:QuitMessage
// Entry    : 00480560
// Prototype: undefined messageCallback(void)
// Body     : 00480560 - 00480574


/* juce::MessageManager::QuitMessage::messageCallback() */

void juce::MessageManager::QuitMessage::messageCallback(void)

{
  if (instance != 0) {
    LOCK();
    *(undefined4 *)(instance + 0xc) = 1;
    UNLOCK();
  }
  return;
}


