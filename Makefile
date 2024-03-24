TARGET := iphone:clang:latest:13.0
INSTALL_TARGET_PROCESSES = SpringBoard

ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = BetterCCBrightness

$(TWEAK_NAME)_FILES = Tweak.x $(wildcard Masonry/Masonry/*.m)
$(TWEAK_NAME)_LIBRARIES = Accessibility
$(TWEAK_NAME)_FRAMEWORKS = MediaAccessibility
$(TWEAK_NAME)_PRIVATE_FRAMEWORKS = BackBoardServices ControlCenterUIKit CoreBrightness ManagedConfiguration SpringBoardUIServices   
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -Iinclude -Wno-objc-dictionary-duplicate-keys -Wno-missing-noescape -IMasonry -IMasonry/Masonry

include $(THEOS_MAKE_PATH)/tweak.mk
