# ZYDraggableView
- An UIView category which make view become draggable. Inspired by [即刻](https://itunes.apple.com/cn/app/ji-ke-yong-zui-lan-fang-shi/id966129812?mt=8) and [一元进宝](https://itunes.apple.com/cn/app/yi-yuan-jin-bao-quan-min-yi/id1056900729?mt=8).

![](./preview.gif)

## Feature

 - [x] Make view become draggable which inherited from UIView.
 - [x] Integrate draggable view just one line of code at least.

## Usage

#### 1.Make view draggable

```Objective-C
[view makeDraggable];
```

#### 2.If draggable view will be layouted by superview, update snap point after layout. 

```Objective-C
// call `-updateSnapPoint` in `-layoutSubviews` or `-viewDidLayoutSubviews`
[view updateSnapPoint];
```

## Requirements

- iOS 7.0+
- Xcode 5.0+

## Installation

Add manually:
- Drag `ZYDraggableView` folder to your project.
- Import header file: `#import "ZYDraggableView.h"`

## License

ZYDraggableView is released under the MIT license. See LICENSE for details.
