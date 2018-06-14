#include <QDebug>

#include "helper.h"

void vkAssert(VkResult res) {
    if(res != VK_SUCCESS) {
        qDebug("Assert failed");
        assert(res == VK_SUCCESS);
    }
}
