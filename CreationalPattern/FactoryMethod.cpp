/*
 *定义一个用于创建对象的接口，让子类决定实例化哪一个类
 */


//Product（定义工厂方法所创建的对象的接口）


//ConcreteProduct（实现Product接口）


//Creator（声明工厂方法，该方法返回一个Product类型的对象；Creator也可以定义一个工厂方法的缺省实现，它返回一个缺省的ConcreteProduct对象）
//可以调用工厂方法以创建一个Product对象


//ConcreteCreator（重定义工厂方法以返回一个ConcreteProduct实例）