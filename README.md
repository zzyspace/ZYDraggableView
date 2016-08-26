# ZYDraggableView
- A UIView category which make view become draggable.

![](./preview.gif)

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
