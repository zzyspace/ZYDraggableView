# ZYDraggableView
- An UIView category which make view draggable. Inspired by [即刻](https://itunes.apple.com/cn/app/ji-ke-yong-zui-lan-fang-shi/id966129812?mt=8) and [一元进宝](https://itunes.apple.com/cn/app/yi-yuan-jin-bao-quan-min-yi/id1056900729?mt=8).

![](./preview.gif)

## Feature

 - [x] Make view become draggable which inherited from UIView.
 - [x] Integrate draggable view **just one line of code**.

## Usage

```Objective-C
[view makeDraggable];
```

## Requirements

- iOS 7.0+
- Xcode 5.0+

## Installation

Add manually:
- Drag `ZYDraggableView` folder to your project.
- Import header file: `#import "ZYDraggableView.h"`

## FAQ

1. Sometimes draggable view was blocked by other views.

> This is depend on draggable view's hierarchical on superview. You can call `-bringSubviewToFront:` to make draggable view above sibling views.

## License

ZYDraggableView is released under the MIT license. See LICENSE for details.
