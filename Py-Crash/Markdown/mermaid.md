# [Mermaid 教程](https://zhuanlan.zhihu.com/p/139166407)

## 流程图

```mermaid
graph TB

id1(圆角矩形)--普通线-->id2[矩形];
subgraph 子图
id2==粗线==>id3{菱形}
id3-. 虚线.->id4>右向旗帜]
id3--无箭头---id5((圆形))
end
```

```mermaid
graph TB

  id1(圆角矩形)--普通线-->id2[矩形];
  subgraph 子图
   id2==粗线==>id3{菱形}
   id3-. 虚线.->id4>右向旗帜]
   id3--无箭头---id5((圆形))
  end
```

| 用词 | 含义     |
| ---- | -------- |
| TB   | 从上到下 |
| BT   | 从下到上 |
| RL   | 从右到左 |
| LR   | 从左到右 |

- 节点定义

| 表述       | 说明           |
| ---------- | -------------- |
| id[文字]   | 矩形节点       |
| id(文字)   | 圆角矩形节点   |
| id((文字)) | 圆形节点       |
| id>文字]   | 右向旗帜状节点 |
| id{文字}   | 菱形节点       |

- 节点连线

| 表述     | 说明           |
| -------- | -------------- |
| >        | 添加尾部箭头   |
| -        | 不添加尾部箭头 |
| --       | 单线           |
| --text-- | 单线上加文字   |
| ==       | 粗线           |
| ==text== | 粗线加文字     |
| -.-      | 虚线           |
| -.text.- | 虚线加文字     |

## 时序图

```mermaid
sequenceDiagram

Alice->>John: Hello John, how are you?
loop Healthcheck
John->>John: Fight against hypochondria
end
Note right of John: Rational thoughts!
John-->>Alice: Great!
John->>Bob : How about you?
Bob-->>John : Jolly good!
```

## Gantt 图

```mermaid
gantt

section Section
Completed: done, des1, 2014-01-06, 2014-01-08
Active : active, des2, 2014-01-07, 3d
Parallel 1 : des3, after des1, 1d
Parallel 2 : des4, after des1, 1d
Parallel 3 : des5, after des3, 1d
Parallel 4 : des6, after des4, 1d
```

```mermaid
gantt

section Section
      Completed: done, des1, 2014-01-06, 2014-01-08
      Active   : active, des2, 2014-01-07, 3d
     Parallel 1    : des3, after des1, 1d
     Parallel 2    : des4, after des1, 1d
     Parallel 3    : des5, after des3, 1d
     Parallel 4    : des6, after des4, 1d

```

```mermaid
pie

title Key elements in Product X
"Calcium" : 42.96
"Potassium" : 50.05
"Magnesium" : 10.01
"Iron" : 5

```

```mermaid
erDiagram
CUSTOMER ||--o{ORDER : places
ORDER ||--|{LINE-ITEM : contains
CUSTOMER}|..|{DELIVERY-ADDRESS : uses

erDiagram
  CUSTOMER ||--o{ORDER : places
  ORDER ||--|{LINE-ITEM : contains
  CUSTOMER}|..|{DELIVERY-ADDRESS : uses
```

```mermaid
gantt

section Section
Completed: done, des1, 2014-01-06, 2014-01-08
Active : active, des2, 2014-01-07, 3d
Parallel 1 : des3, after des1, 1d
Parallel 2 : des4, after des1, 1d
Parallel 3 : des5, after des3, 1d
Parallel 4 : des6, after des4, 1d
```

```mermaid
gantt

section Section
      Completed: done, des1, 2014-01-06, 2014-01-08
      Active   : active, des2, 2014-01-07, 3d
     Parallel 1    : des3, after des1, 1d
     Parallel 2    : des4, after des1, 1d
     Parallel 3    : des5, after des3, 1d
     Parallel 4    : des6, after des4, 1d

```

```mermaid
gantt

section Plan
whole section: done, des1, 2022-01-01, 2022-05-15
Active : active, des2, 2022-03-01,30d
Parallel 1 : des3, after des1, 30d
Parallel 2 : des4, after des2, 30d
Parallel 3 : des5,after des3, 30d
Parallel 4 : des6, after des5, 30d
```
